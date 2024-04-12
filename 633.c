void fun()
{
  int entity_1 = 13;
  entity_1 = 57;
  char* entity_2;
  char* entity_3;
  char entity_0[80] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  memset(entity_0, 'l', 80-1);
  entity_0[80-1]='';
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  entity_0[entity_1] = 'E';
}