void fun()
{
  int entity_5 = 32;
  char entity_7[17] = "";
  entity_7 = NULL;
  char entity_9[58] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[27-1]='';
  memset(entity_7, 'A', 17-1);
  entity_7[17-1]='';
  memset(entity_9, 'b', 58-1);
  entity_9[58-1]='';
  strcpy(entity_3, entity_9);
}