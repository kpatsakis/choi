void fun()
{
  int entity_1 = 32;
  entity_1 = 100;
  char entity_0[75] = "";
  char entity_6[2] = "";
  char* entity_7;
  char* entity_9;
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'y', 2-1);
  entity_6[2-1]='0';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'j', 75-1);
  entity_0[75-1]='0';
  strcpy(entity_7, entity_6);
}