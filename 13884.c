void fun()
{
  int entity_7 = 31;
  int entity_6 = 81;
  char entity_8[entity_6] = "";
  char* entity_2;
  char* entity_3;
  char* entity_0;
  entity_0 = (char*)malloc(36*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'e', entity_6-1);
  entity_8[entity_6-1]='0';
  entity_3 = (char*)malloc(25*sizeof(char));
  entity_3[0]='0';
  entity_2 = (char*)malloc(45*sizeof(char));
  entity_2[0]='0';
  entity_6 = 29;
  memcpy(entity_2, entity_8, entity_6*sizeof(char));
}