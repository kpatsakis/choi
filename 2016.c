void fun()
{
  int entity_1 = 96;
  char* entity_9;
  char entity_7[82] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_7, 'R', 82-1);
  entity_7[82-1]='';
  entity_1 = 44;
  memcpy(entity_9, entity_7, 82*sizeof(char));
}