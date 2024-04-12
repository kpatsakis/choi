void fun()
{
  int entity_0 = 92;
  char entity_6 = 's';
  char* entity_2;
  char entity_1[entity_0] = "";
  char* entity_7;
  char* entity_4;
  memset(entity_1, 'd', entity_0-1);
  entity_1[entity_0-1]='0';
  entity_7 = (char*)malloc(92*sizeof(char));
  entity_7[0]='0';
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[0]='0';
  entity_2 = (char*)malloc(75*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_1);
}