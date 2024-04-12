void fun()
{
  char entity_1[58] = "";
  entity_1 = NULL;
  char* entity_0;
  char entity_3[40] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'e', 40-1);
  entity_3[40-1]='';
  entity_2 = (char*)malloc(89*sizeof(char));
  entity_2[89-1]='';
  entity_0 = (char*)malloc(74*sizeof(char));
  entity_0[74-1]='';
  memset(entity_1, 't', 58-1);
  entity_1[58-1]='';
  memcpy(entity_2, entity_3, 40*sizeof(char));
}