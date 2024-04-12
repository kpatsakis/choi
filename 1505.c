void fun()
{
  int entity_3 = 41;
  char* entity_1;
  char entity_7[82] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_7, 'r', 82-1);
  entity_7[82-1]='';
  entity_3 = 38;
  memcpy(entity_1, entity_7, 82*sizeof(char));
}