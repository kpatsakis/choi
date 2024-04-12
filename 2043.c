void fun()
{
  int entity_6 = 86;
  int entity_2 = 14;
  int entity_7 = 55;
  entity_2 = 84;
  char* entity_5;
  char* entity_4;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(3*sizeof(char));
  entity_5[3-1]='';
  memset(entity_3, 'f', entity_2-1);
  entity_3[entity_2-1]='';
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[48-1]='';
  memcpy(entity_5, entity_3, entity_2*sizeof(char));
}