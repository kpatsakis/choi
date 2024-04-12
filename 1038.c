void fun()
{
  int entity_1 = 30;
  entity_1 = 10;
  char* entity_8;
  char* entity_2;
  char entity_0[87] = "";
  entity_0 = NULL;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(34*sizeof(char));
  entity_8[34-1]='';
  memset(entity_7, 'Y', entity_1-1);
  entity_7[entity_1-1]='';
  memset(entity_0, 'd', 87-1);
  entity_0[87-1]='';
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  memcpy(entity_8, entity_7, entity_1*sizeof(char));
}