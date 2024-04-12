void fun()
{
  int entity_4 = 18;
  char* entity_3;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_5;
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[40-1]='';
  memset(entity_8, 'g', entity_4-1);
  entity_8[entity_4-1]='';
  entity_5 = (char*)malloc(3*sizeof(char));
  entity_5[3-1]='';
  memcpy(entity_3, entity_8, entity_4*sizeof(char));
}