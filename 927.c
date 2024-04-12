void fun()
{
  int entity_4 = 46;
  char* entity_7;
  char entity_8[43] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_8, 'n', 43-1);
  entity_8[43-1]='';
  entity_7 = (char*)malloc(27*sizeof(char));
  entity_7[27-1]='';
  entity_9 = (char*)malloc(37*sizeof(char));
  entity_9[37-1]='';
  memcpy(entity_9, entity_8, 43*sizeof(char));
}