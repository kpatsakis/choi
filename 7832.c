void fun()
{
  int entity_6 = 60;
  int entity_8 = 56;
  entity_6 = 96;
  char* entity_9;
  char entity_4[82] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_4, 'J', 82-1);
  entity_4[82-1]='';
  memcpy(entity_9, entity_4, 82*sizeof(char));
}