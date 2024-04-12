void fun()
{
  int entity_1 = 48;
  int entity_8 = 17;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(1*sizeof(char));
  entity_3[1-1]='';
  memset(entity_2, 'd', entity_1-1);
  entity_2[entity_1-1]='';
  memcpy(entity_3, entity_2, entity_1*sizeof(char));
}