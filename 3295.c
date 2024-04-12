void fun()
{
  int entity_0 = 66;
  int entity_8 = 18;
  int entity_9 = 20;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char entity_2[13] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_5, 'b', entity_0-1);
  entity_5[entity_0-1]='';
  memset(entity_2, 'G', 13-1);
  entity_2[13-1]='';
  entity_7 = (char*)malloc(78*sizeof(char));
  entity_7[78-1]='';
  strcpy(entity_7, entity_5);
}