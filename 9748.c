void fun()
{
  int entity_8 = 99;
  char* entity_0;
  char entity_1[36] = "";
  entity_1 = NULL;
  char* entity_5;
  char* entity_2;
  entity_2 = (char*)malloc(5*sizeof(char));
  entity_2[5-1]='';
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[28-1]='';
  memset(entity_1, 'J', 36-1);
  entity_1[36-1]='';
  entity_0 = (char*)malloc(25*sizeof(char));
  entity_0[25-1]='';
  memcpy(entity_0, entity_1, 36*sizeof(char));
}