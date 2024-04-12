void fun()
{
  int entity_7 = 77;
  int entity_2 = 26;
  char entity_6[entity_2] = "";
  char* entity_1;
  char* entity_0;
  char entity_4[69] = "";
  memset(entity_6, 's', entity_2-1);
  entity_6[entity_2-1]='0';
  entity_0 = (char*)malloc(60*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'd', 69-1);
  entity_4[69-1]='0';
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[0]='0';
  entity_2 = 59;
  memcpy(entity_0, entity_6, entity_2*sizeof(char));
}