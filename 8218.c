void fun()
{
  int entity_2 = 67;
  int entity_5 = 94;
  entity_2 = 67;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_4[31] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'x', 31-1);
  entity_4[31-1]='';
  entity_0 = (char*)malloc(75*sizeof(char));
  entity_0[75-1]='';
  entity_3 = (char*)malloc(92*sizeof(char));
  entity_3[92-1]='';
  memset(entity_6, 'A', entity_2-1);
  entity_6[entity_2-1]='';
  memcpy(entity_0, entity_6, entity_2*sizeof(char));
}