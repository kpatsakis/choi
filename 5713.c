void fun()
{
  int entity_6 = 72;
  char entity_8[50] = "";
  entity_8 = NULL;
  char entity_3 = 'B';
  char* entity_9;
  memset(entity_8, 'X', 50-1);
  entity_8[50-1]='';
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[62-1]='';
  strcpy(entity_9, entity_8);
}