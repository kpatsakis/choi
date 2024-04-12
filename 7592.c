void fun()
{
  int entity_5 = 64;
  entity_5 = 50;
  char entity_8[25] = "";
  entity_8 = NULL;
  char entity_6[12] = "";
  entity_6 = NULL;
  char* entity_3;
  char* entity_1;
  char entity_9 = 'i';
  memset(entity_6, 'D', 12-1);
  entity_6[12-1]='';
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memset(entity_8, 'g', 25-1);
  entity_8[25-1]='';
  memcpy(entity_3, entity_8, 25*sizeof(char));
}