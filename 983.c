void fun()
{
  int entity_2 = 2;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_3;
  char* entity_6;
  entity_5 = (char*)malloc(20*sizeof(char));
  entity_5[20-1]='';
  memset(entity_7, 'd', entity_2-1);
  entity_7[entity_2-1]='';
  entity_6 = (char*)malloc(41*sizeof(char));
  entity_6[41-1]='';
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  memcpy(entity_5, entity_7, entity_2*sizeof(char));
}