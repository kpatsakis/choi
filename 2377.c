void fun()
{
  int entity_2 = 96;
  int entity_7 = 57;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char* entity_5;
  char* entity_3;
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[57-1]='';
  entity_5 = (char*)malloc(12*sizeof(char));
  entity_5[12-1]='';
  memset(entity_0, 'd', entity_2-1);
  entity_0[entity_2-1]='';
  entity_0[50] = 'r';
}