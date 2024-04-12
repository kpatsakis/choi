void fun()
{
  char* entity_2;
  char entity_7[59] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'm', 59-1);
  entity_7[59-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  entity_4 = (char*)malloc(28*sizeof(char));
  entity_4[28-1]='';
  entity_7[57] = 'q';
}