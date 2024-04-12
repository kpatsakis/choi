void fun()
{
  int entity_3 = 36;
  char* entity_0;
  char* entity_1;
  char* entity_2;
  char entity_8[entity_3] = "";
  entity_2 = (char*)malloc(56*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(81*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 't', entity_3-1);
  entity_8[entity_3-1]='0';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_1, entity_8);
}