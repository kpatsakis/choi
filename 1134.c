void fun()
{
  int entity_7 = 7;
  entity_7 = 75;
  char* entity_1;
  char entity_2[88] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[68-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memset(entity_2, 'J', 88-1);
  entity_2[88-1]='';
  memcpy(entity_1, entity_2, 88*sizeof(char));
}