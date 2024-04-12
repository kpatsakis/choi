void fun()
{
  char* entity_6;
  char entity_7[21] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(8*sizeof(char));
  entity_6[8-1]='';
  memset(entity_7, 'C', 21-1);
  entity_7[21-1]='';
  memcpy(entity_6, entity_7, 21*sizeof(char));
}