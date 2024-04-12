void fun()
{
  int entity_7 = 16;
  int entity_2 = 38;
  int entity_3 = 15;
  char* entity_5;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memset(entity_1, 'g', entity_2-1);
  entity_1[entity_2-1]='';
  memcpy(entity_5, entity_1, entity_2*sizeof(char));
}