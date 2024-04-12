void fun()
{
  int entity_1 = 60;
  char* entity_2;
  char entity_6 = 'J';
  char* entity_0;
  char entity_3[97] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  entity_0 = (char*)malloc(83*sizeof(char));
  entity_0[83-1]='';
  memset(entity_3, 'j', 97-1);
  entity_3[97-1]='';
  entity_1 = 82;
  strcpy(entity_2, entity_3);
}