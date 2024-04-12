void fun()
{
  int entity_4 = 98;
  char* entity_6;
  char entity_8[92] = "";
  entity_8 = NULL;
  char entity_0[74] = "";
  entity_0 = NULL;
  char entity_7 = 'X';
  char* entity_9;
  memset(entity_0, 'U', 74-1);
  entity_0[74-1]='';
  entity_9 = (char*)malloc(56*sizeof(char));
  entity_9[56-1]='';
  memset(entity_8, 'T', 92-1);
  entity_8[92-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  entity_4 = 16;
  memcpy(entity_6, entity_8, 92*sizeof(char));
}