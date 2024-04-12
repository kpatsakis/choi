void fun()
{
  int entity_3 = 24;
  entity_3 = 45;
  char entity_5[74] = "";
  entity_5 = NULL;
  char* entity_1;
  char* entity_4;
  char entity_0 = 'P';
  char entity_8[68] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_5, 'Y', 74-1);
  entity_5[74-1]='';
  entity_1 = (char*)malloc(45*sizeof(char));
  entity_1[45-1]='';
  memset(entity_8, 'v', 68-1);
  entity_8[68-1]='';
  strcpy(entity_4, entity_8);
}