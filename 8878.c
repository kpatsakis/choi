void fun()
{
  char* entity_1;
  char entity_7[20] = "";
  entity_7 = NULL;
  char entity_6 = 'z';
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[1-1]='';
  memset(entity_7, 'r', 20-1);
  entity_7[20-1]='';
  entity_7[100] = 'H';
}