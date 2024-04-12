void fun()
{
  int entity_0 = 19;
  char entity_2 = 'X';
  char* entity_9;
  char* entity_4;
  char* entity_6;
  char entity_3[35] = "";
  entity_3 = NULL;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  entity_9 = (char*)malloc(36*sizeof(char));
  entity_9[36-1]='';
  entity_4 = (char*)malloc(16*sizeof(char));
  entity_4[16-1]='';
  memset(entity_3, 'r', 35-1);
  entity_3[35-1]='';
  memcpy(entity_6, entity_3, 35*sizeof(char));
}