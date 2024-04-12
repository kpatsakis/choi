void fun()
{
  int entity_2 = 22;
  char* entity_9;
  char entity_4[31] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_7[6] = "";
  entity_7 = NULL;
  memset(entity_4, 'w', 31-1);
  entity_4[31-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memset(entity_7, 'n', 6-1);
  entity_7[6-1]='';
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[62-1]='';
  strcpy(entity_8, entity_7);
}