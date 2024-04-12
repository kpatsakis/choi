void fun()
{
  int entity_7 = 36;
  int entity_8 = 55;
  entity_7 = 49;
  char* entity_0;
  char* entity_1;
  char entity_3 = 'P';
  char entity_2[56] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[26-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_2, 'o', 56-1);
  entity_2[56-1]='';
  memcpy(entity_0, entity_2, 56*sizeof(char));
}