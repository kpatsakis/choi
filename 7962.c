void fun()
{
  int entity_4 = 1;
  char* entity_0;
  char entity_8 = 'G';
  char entity_3[9] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 's', 9-1);
  entity_3[9-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  entity_0 = (char*)malloc(51*sizeof(char));
  entity_0[51-1]='';
  entity_4 = 35;
  memcpy(entity_7, entity_3, 9*sizeof(char));
}