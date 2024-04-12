void fun()
{
  int entity_8 = 14;
  entity_8 = 2;
  char* entity_3;
  char* entity_1;
  char* entity_4;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[80-1]='';
  memset(entity_7, 'u', entity_8-1);
  entity_7[entity_8-1]='';
  entity_3 = (char*)malloc(36*sizeof(char));
  entity_3[36-1]='';
  entity_1 = (char*)malloc(57*sizeof(char));
  entity_1[57-1]='';
  entity_7[53] = 'y';
}