void fun()
{
  int entity_4 = 65;
  char* entity_6;
  char* entity_0;
  char* entity_3;
  char entity_2[2] = "";
  entity_2 = NULL;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(7*sizeof(char));
  entity_3[7-1]='';
  entity_6 = (char*)malloc(0*sizeof(char));
  entity_6[0-1]='';
  memset(entity_2, 'p', 2-1);
  entity_2[2-1]='';
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[11-1]='';
  memset(entity_7, 'x', entity_4-1);
  entity_7[entity_4-1]='';
  memcpy(entity_3, entity_7, entity_4*sizeof(char));
}