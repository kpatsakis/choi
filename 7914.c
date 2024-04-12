void fun()
{
  int entity_3 = 72;
  char* entity_2;
  char entity_1[13] = "";
  entity_1 = NULL;
  memset(entity_1, 'S', 13-1);
  entity_1[13-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  entity_3 = 25;
  memcpy(entity_2, entity_1, 13*sizeof(char));
}