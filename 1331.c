void fun()
{
  int entity_1 = 74;
  int entity_8 = 90;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_2;
  char* entity_0;
  entity_2 = (char*)malloc(37*sizeof(char));
  entity_2[37-1]='';
  memset(entity_4, 'W', entity_1-1);
  entity_4[entity_1-1]='';
  entity_0 = (char*)malloc(22*sizeof(char));
  entity_0[22-1]='';
  entity_4[56] = 'D';
}