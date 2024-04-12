void fun()
{
  int entity_8 = 76;
  int entity_1 = 15;
  entity_8 = 76;
  char* entity_0;
  char entity_2[entity_8] = "";
  char* entity_3;
  char* entity_9;
  entity_3 = (char*)malloc(10*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'Y', entity_8-1);
  entity_2[entity_8-1]='0';
  entity_9 = (char*)malloc(50*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_9, entity_2);
}