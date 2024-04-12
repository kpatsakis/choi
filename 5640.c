void fun()
{
  int entity_3 = 18;
  int entity_9 = 72;
  char* entity_8;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char entity_7[47] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(19*sizeof(char));
  entity_8[19-1]='';
  memset(entity_6, 'O', entity_9-1);
  entity_6[entity_9-1]='';
  memset(entity_7, 'Q', 47-1);
  entity_7[47-1]='';
  strcpy(entity_8, entity_6);
}