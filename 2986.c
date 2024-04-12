void fun()
{
  int entity_3 = 24;
  int entity_0 = 50;
  char* entity_9;
  char entity_1[97] = "";
  entity_1 = NULL;
  memset(entity_1, 'C', 97-1);
  entity_1[97-1]='';
  entity_9 = (char*)malloc(13*sizeof(char));
  entity_9[13-1]='';
  entity_1[entity_0] = 'J';
}