# first

def solution(S):
    rows = S.split('\n')
    headers = rows[0].split(',')
    cleaned_rows = [row for row in rows[1:] if "NULL" not in row.split(',')]
    cleaned_table = '\n'.join([','.join(headers)]+cleaned_rows)
    return cleaned_table



#second

def solution(S,c):
    rows = s.split('\n')
    headers = rows[0].split(',')

    try:
        col_index = headers.index(c)
    except ValueError:
        return None

    max_value = None

    for row in rows[1:]:
        fields = row.split(',')

        if len(fields) >col_index:
            value = fields[col-index].strip()
            
            if value.isdigit() or (value.startswith('-') and value[1:].isdigit()):
                value = int(value)

                if max_value is None or value > max_value:
                    max_value = value
    

    return max_value