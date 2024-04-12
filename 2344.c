void fun()
{
  char entity_1 = 'V';
  char* entity_7;
  char* entity_0;
  char* entity_4;
  char entity_3[10] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(5*sizeof(char));
  entity_4[5-1]='';
  memset(entity_3, 'Z', 10-1);
  entity_3[10-1]='';
  entity_7 = (char*)malloc(83*sizeof(char));
  entity_7[83-1]='';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  memcpy(entity_0, entity_3, 10*sizeof(char));
}