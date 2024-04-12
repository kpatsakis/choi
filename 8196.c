void fun()
{
  char entity_5[11] = "";
  entity_5 = NULL;
  char* entity_6;
  char* entity_7;
  entity_7 = (char*)malloc(1*sizeof(char));
  entity_7[1-1]='';
  entity_6 = (char*)malloc(27*sizeof(char));
  entity_6[27-1]='';
  memset(entity_5, 'O', 11-1);
  entity_5[11-1]='';
  memcpy(entity_6, entity_5, 11*sizeof(char));
}