void fun()
{
  int entity_4 = 48;
  char* entity_9;
  char entity_7[78] = "";
  entity_7 = NULL;
  memset(entity_7, 'C', 78-1);
  entity_7[78-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memcpy(entity_9, entity_7, 78*sizeof(char));
}