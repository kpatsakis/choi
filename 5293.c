void fun()
{
  int entity_9 = 94;
  char entity_4[78] = "";
  entity_4 = NULL;
  char* entity_1;
  memset(entity_4, 'd', 78-1);
  entity_4[78-1]='';
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  entity_4[entity_9] = 'J';
}