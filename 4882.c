void fun()
{
  int entity_4 = 9;
  entity_4 = 63;
  char* entity_1;
  char entity_5 = 'A';
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(76*sizeof(char));
  entity_3[76-1]='';
  memset(entity_6, 'g', entity_4-1);
  entity_6[entity_4-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  memcpy(entity_3, entity_6, entity_4*sizeof(char));
}