void fun()
{
  int entity_3 = 47;
  char* entity_1;
  char entity_7 = 'N';
  char entity_2[76] = "";
  entity_2 = NULL;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'p', entity_3-1);
  entity_5[entity_3-1]='';
  entity_6 = (char*)malloc(57*sizeof(char));
  entity_6[57-1]='';
  entity_1 = (char*)malloc(84*sizeof(char));
  entity_1[84-1]='';
  memset(entity_2, 'v', 76-1);
  entity_2[76-1]='';
  entity_3 = 58;
  memcpy(entity_6, entity_5, entity_3*sizeof(char));
}