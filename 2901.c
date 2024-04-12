void fun()
{
  int entity_2 = 92;
  char entity_9[27] = "";
  entity_9 = NULL;
  char entity_3[64] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_7;
  entity_0 = (char*)malloc(56*sizeof(char));
  entity_0[56-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_3, 's', 64-1);
  entity_3[64-1]='';
  memset(entity_9, 'z', 27-1);
  entity_9[27-1]='';
  strcpy(entity_7, entity_3);
}