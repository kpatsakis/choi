void fun()
{
  int entity_0 = 84;
  char entity_4[50] = "";
  entity_4 = NULL;
  char entity_7[68] = "";
  entity_7 = NULL;
  char entity_5 = 'o';
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_4, 'U', 50-1);
  entity_4[50-1]='';
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[15-1]='';
  memset(entity_7, 'V', 68-1);
  entity_7[68-1]='';
  memset(entity_6, 'S', entity_0-1);
  entity_6[entity_0-1]='';
  entity_0 = 28;
  memcpy(entity_2, entity_6, entity_0*sizeof(char));
}