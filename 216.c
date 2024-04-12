void fun()
{
  char entity_8[26] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[43-1]='';
  memset(entity_8, 'E', 26-1);
  entity_8[26-1]='';
  memcpy(entity_1, entity_8, 26*sizeof(char));
}