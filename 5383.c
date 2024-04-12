void fun()
{
  char entity_0[28] = "";
  entity_0 = NULL;
  char* entity_7;
  char* entity_5;
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  entity_7 = (char*)malloc(70*sizeof(char));
  entity_7[70-1]='';
  memset(entity_0, 'c', 28-1);
  entity_0[28-1]='';
  memcpy(entity_5, entity_0, 28*sizeof(char));
}